
void FUN_0056e910(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00646d4b;
  local_c = ExceptionList;
  if (DAT_006f2350 == 0) {
    ExceptionList = &local_c;
    cVar1 = FUN_00429890();
    if (cVar1 != '\0') {
      iVar2 = FUN_005e4980(param_1);
      if ((iVar2 != 0) && (piVar4 = *(int **)(iVar2 + 0x1c), piVar4 != (int *)0x0)) {
        if ((piVar4[0x5a] != 0) && (piVar4[0x66] == 1)) {
          FUN_00568a90(piVar4[0x56],1);
          piVar4[0x66] = 2;
          FUN_00568a90(piVar4[0x56],2);
          (**(code **)(*piVar4 + 0x18))(1);
        }
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        FUN_005a37a0(&local_18);
        iVar2 = FUN_00631d33(0xc0);
        uStack_4 = 0;
        if (iVar2 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          uVar14 = 0x3fb99999;
          uVar13 = 0x9999999a;
          uVar12 = 3;
          pcVar11 = s_mineSound_0067b0c0;
          pcVar10 = s_mineExplose_0067a9a0;
          uVar9 = 0x40000000;
          uVar8 = 0;
          uVar5 = local_18;
          uVar6 = local_14;
          uVar7 = local_10;
          uVar3 = FUN_005eec70(local_18,local_14,local_10,0,0x40000000,s_mineExplose_0067a9a0,
                               s_mineSound_0067b0c0,3,0x9999999a,0x3fb99999);
          piVar4 = (int *)FUN_005a45f0(*(undefined4 *)(DAT_006cdbcc + 0x54c),uVar3,uVar5,uVar6,uVar7
                                       ,uVar8,uVar9,pcVar10,pcVar11,uVar12,uVar13,uVar14);
        }
        uStack_4 = 0xffffffff;
        (**(code **)(*piVar4 + 0x18))(1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

