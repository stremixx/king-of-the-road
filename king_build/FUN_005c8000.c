
undefined4 FUN_005c8000(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int local_48 [4];
  int iStack_38;
  int local_34;
  undefined1 local_30 [48];
  
  if ((((uint *)(param_1 + 0xf) != (uint *)0x0) && (param_1[0x11] == 0xc)) &&
     (DAT_0070db50 != (code *)0x0)) {
    iVar1 = param_1[0x12];
    piVar9 = param_1 + 5;
    local_48[0] = *(int *)(iVar1 + 0x20);
    local_48[1] = *(undefined4 *)(iVar1 + 0x24);
    uVar2 = *(undefined4 *)(iVar1 + 0x28);
    local_34 = param_1[8];
    FUN_005ab330(local_30,*piVar9,param_1[6],param_1[7]);
    uVar3 = param_1[0xf];
    piVar5 = (int *)FUN_005eec70();
    (**(code **)(*param_1 + 0x24))();
    iVar4 = DAT_007015b8;
    iVar8 = DAT_007015b4;
    local_48[2] = *piVar9;
    local_48[3] = param_1[6];
    local_34 = param_1[8];
    iStack_38 = DAT_007015b8;
    *piVar9 = DAT_007015b0;
    param_1[6] = iVar8;
    param_1[8] = local_34;
    param_1[7] = iVar4;
    FUN_005ecc90(param_1);
    param_1[0x11] = 2;
    piVar6 = (int *)FUN_00631d33(8);
    param_1[0x12] = (int)piVar6;
    piVar9 = local_48;
    for (uVar7 = param_1[0x11] & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
      *piVar6 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar6 = piVar6 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(char *)piVar6 = (char)*piVar9;
      piVar9 = (int *)((int)piVar9 + 1);
      piVar6 = (int *)((int)piVar6 + 1);
    }
    iVar8 = (*DAT_0070db50)(piVar5,local_30,param_1,uVar3 >> 8 & 0xf,uVar2,0,param_2);
    if (iVar8 != 0) {
      if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x2c) + 0x24))();
        if (*(undefined4 **)(iVar1 + 0x2c) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar1 + 0x2c))(1);
        }
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      FUN_00631d5c(iVar1);
      param_1[0x10] = 1;
      return 1;
    }
    FUN_00631d5c(param_1[0x12]);
    param_1[0x12] = iVar1;
    param_1[0x11] = 0xc;
    (**(code **)(*piVar5 + 0x14))(0,param_1);
  }
  return 0;
}

