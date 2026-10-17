
undefined4 FUN_00517eb0(undefined4 param_1,undefined4 param_2)

{
  IStorageVtbl *pIVar1;
  WCHAR *pwcsName;
  OLECHAR *pwcsName_00;
  undefined4 uVar2;
  int *unaff_ESI;
  IStorage *pstgPriority;
  void *reserved1;
  DWORD DVar3;
  SNB snbExclude;
  DWORD DVar4;
  IStream **ppstm;
  IStorage **ppstgOpen;
  IStorage *local_48;
  IStream *local_44;
  undefined1 local_40 [64];
  
  local_48 = (IStorage *)0x0;
  local_44 = (IStream *)0x0;
  FUN_0061c369(local_40,s__s_mvp_00676208,param_1);
  ppstgOpen = &local_48;
  DVar4 = 0;
  snbExclude = (SNB)0x0;
  DVar3 = 0x10;
  pstgPriority = (IStorage *)0x0;
  pwcsName = (WCHAR *)FUN_0050b500(local_40);
  StgOpenStorage(pwcsName,pstgPriority,DVar3,snbExclude,DVar4,ppstgOpen);
  if (local_48 == (IStorage *)0x0) {
    return 0;
  }
  ppstm = &local_44;
  pIVar1 = local_48->lpVtbl;
  DVar4 = 0;
  DVar3 = 0x10;
  reserved1 = (void *)0x0;
  pwcsName_00 = (OLECHAR *)FUN_0050b500(&DAT_00676200);
  (*pIVar1->OpenStream)(local_48,pwcsName_00,reserved1,DVar3,DVar4,ppstm);
  if (local_44 == (IStream *)0x0) {
    (*local_48->lpVtbl->Release)(local_48);
    return 0;
  }
  uVar2 = FUN_0050bb70(local_44,param_2);
  (*local_44->lpVtbl->Release)(local_44);
  (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  return uVar2;
}

