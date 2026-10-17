
IStorage * FUN_0051b780(char *param_1,int param_2)

{
  char cVar1;
  WCHAR *pWVar2;
  HRESULT HVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  IStorage *pstgPriority;
  DWORD DVar10;
  SNB snbExclude;
  DWORD reserved;
  IStorage **ppstgOpen;
  IStorage **ppstgOpen_00;
  undefined4 local_2c;
  char local_28 [40];
  
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_00670204;
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = local_28;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_2c = (IStorage *)0x0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar9 = local_28;
  do {
    pcVar8 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = local_28;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  ppstgOpen = (IStorage **)&local_2c;
  ppstgOpen_00 = (IStorage **)&local_2c;
  *(undefined1 *)((int)&local_2c + ~uVar4 + 3) = 0x2e;
  builtin_strncpy(local_28 + ~uVar4,"pl1",4);
  if (param_2 == 0) {
    reserved = 0;
    DVar10 = 0x1011;
    pWVar2 = (WCHAR *)FUN_0050b500(local_28);
    HVar3 = StgCreateDocfile(pWVar2,DVar10,reserved,ppstgOpen);
    if (HVar3 != 0) {
      FUN_005d2520(s_can_not_create_Storage_006764e8,0);
      return local_2c;
    }
  }
  else {
    DVar10 = 0;
    uVar4 = (uint)(-(param_2 != 1) & 2U | 0x10);
    snbExclude = (SNB)0x0;
    pstgPriority = (IStorage *)0x0;
    pWVar2 = (WCHAR *)FUN_0050b500(local_28);
    StgOpenStorage(pWVar2,pstgPriority,uVar4,snbExclude,DVar10,ppstgOpen_00);
  }
  return local_2c;
}

