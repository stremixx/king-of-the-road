
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0056c4a0(IStream *param_1)

{
  IStorageVtbl *pIVar1;
  WCHAR *pwcsName;
  OLECHAR *pwcsName_00;
  DWORD DVar2;
  DWORD DVar3;
  DWORD reserved2;
  IStorage **ppstgOpen;
  IStream **ppstm;
  IStream *This;
  IStorage *local_44;
  undefined1 local_40 [64];
  
  FUN_0061c369(local_40,s__s_mvp_00676208,param_1);
  ppstgOpen = &local_44;
  DVar3 = 0;
  DVar2 = 0x1011;
  pwcsName = (WCHAR *)FUN_0050b500(local_40);
  StgCreateDocfile(pwcsName,DVar2,DVar3,ppstgOpen);
  ppstm = &param_1;
  reserved2 = 0;
  pIVar1 = local_44->lpVtbl;
  DVar3 = 0;
  DVar2 = 0x1011;
  pwcsName_00 = (OLECHAR *)FUN_0050b500(&DAT_00676200);
  (*pIVar1->CreateStream)(local_44,pwcsName_00,DVar2,DVar3,reserved2,ppstm);
  if (param_1 == (IStream *)0x0) {
    FUN_005d2520(s_can_not_open_context_for_saving_g_006765e4,0);
  }
  FUN_0050bc10(param_1,0x48,0x36,0);
  This = param_1;
  (*param_1->lpVtbl->Release)();
  (*This->lpVtbl->Release)(This);
  return;
}

