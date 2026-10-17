
undefined4 * FUN_00431500(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d560;
  local_c = ExceptionList;
  if (DAT_006898e0 == DAT_006898e4) {
    *param_1 = DAT_0068a8f0;
    return param_1;
  }
  iVar9 = DAT_006898e4 - DAT_006898e0 >> 2;
  if (iVar9 == 0) {
    puVar8 = (undefined4 *)0x0;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    puVar8 = (undefined4 *)FUN_0044b6e0(iVar9 * 4);
  }
  local_4 = 0;
  puVar2 = (undefined4 *)FUN_0046b5a0(DAT_006898e0,DAT_006898e4,puVar8,param_1);
  local_4 = 1;
  if (puVar8 != puVar2) {
    uVar3 = (int)puVar2 - (int)puVar8;
    iVar7 = 0;
    for (iVar6 = (int)uVar3 >> 2; iVar6 != 1; iVar6 = iVar6 >> 1) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = iVar7 * 2;
    puVar1 = puVar2;
    while (0x40 < (int)(uVar3 & 0xfffffffc)) {
      if (iVar7 == 0) {
        FUN_00465f70(puVar8,puVar1,puVar1,param_1);
        break;
      }
      iVar7 = iVar7 + -1;
      uVar4 = FUN_00466050(puVar8,puVar8 + (((int)puVar1 - (int)puVar8 >> 2) -
                                            ((int)puVar1 - (int)puVar8 >> 0x1f) >> 1),puVar1 + -1,
                           param_1,param_1);
      FUN_0041d3f0(uVar4);
      puVar5 = (undefined4 *)FUN_00466100(puVar8,puVar1);
      FUN_0045f860(puVar5,puVar1,0,iVar7,param_1);
      puVar1 = puVar5;
      uVar3 = (int)puVar5 - (int)puVar8;
    }
    FUN_0045f920(puVar8,puVar2,param_1);
  }
  iVar9 = iVar9 * 4 >> 2;
  *param_1 = puVar2[-1];
  if (iVar9 != 0) {
    uVar3 = iVar9 * 4;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *puVar8 = *(undefined4 *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = puVar8;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(puVar8);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

