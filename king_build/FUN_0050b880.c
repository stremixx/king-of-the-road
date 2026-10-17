
void __fastcall FUN_0050b880(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iStack_18;
  int iStack_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006455db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  (**(code **)(*DAT_00695c00 + 0x20))();
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  iStack_18 = DAT_006957b4;
  uVar1 = DAT_006957b0;
  iVar2 = FUN_00631d33(0x54);
  uStack_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005b9b50(uVar1,iStack_18,2);
  }
  *param_1 = iVar2;
  uStack_4 = 0xffffffff;
  puVar3 = (undefined4 *)FUN_005d38b0(&iStack_14);
  puVar5 = *(undefined4 **)(*param_1 + 8);
  if (0 < iStack_18) {
    do {
      puVar6 = puVar3;
      puVar7 = puVar5;
      for (uVar4 = (uVar1 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = (undefined4 *)((int)puVar5 + uVar1 * 2);
      for (uVar4 = uVar1 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar3 = (undefined4 *)((int)puVar3 + iStack_14);
      iStack_18 = iStack_18 + -1;
    } while (iStack_18 != 0);
  }
  FUN_005d3890(puVar3);
  FUN_005ba4e0(0);
  ExceptionList = pvStack_c;
  return;
}

