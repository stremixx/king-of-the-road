
uint FUN_00583c50(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  float10 fVar8;
  int local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 *local_70;
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fVar8 = (float10)FUN_004e1fd9();
  local_7c = (float)fVar8;
  piVar7 = (int *)(param_1 + 0xdb4);
  local_9c = 0;
  do {
    iVar3 = *piVar7;
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    fVar1 = (ABS(*(float *)(iVar3 + 0xcec) - *(float *)(param_1 + 0xcec)) +
            ABS(*(float *)(iVar3 + 0xce8) - *(float *)(param_1 + 0xce8)) +
            ABS(*(float *)(iVar3 + 0xce4) - *(float *)(param_1 + 0xce4))) * local_7c +
            *(float *)(iVar3 + 0xcc8) + *(float *)(param_1 + 0xcc8);
    if ((float)piVar7[6] <= fVar1 * fVar1) {
      if ((*(int *)(iVar3 + 0x188) == 2) && (*(int *)(iVar3 + 0xf88) == 2)) {
        puVar2 = (undefined4 *)FUN_00631d33(0x10);
        puVar6 = (undefined4 *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar6 = puVar2;
        }
        iVar3 = FUN_0057d570(local_6c);
        *puVar6 = *(undefined4 *)(iVar3 + 0x24);
        puVar6[1] = *(undefined4 *)(iVar3 + 0x28);
        puVar6[2] = *(undefined4 *)(iVar3 + 0x2c);
        puVar6[3] = *(undefined4 *)(*piVar7 + 0xcc8);
        local_78 = 1;
        local_4 = 0;
        local_70 = puVar6;
        iVar3 = FUN_0057d570(local_3c);
        local_94 = *(undefined4 *)(iVar3 + 0x24);
        local_88 = *(undefined4 *)(param_4 + 0x24);
        local_90 = *(undefined4 *)(iVar3 + 0x28);
        local_84 = *(undefined4 *)(param_4 + 0x28);
        local_8c = *(undefined4 *)(iVar3 + 0x2c);
        local_80 = *(undefined4 *)(param_4 + 0x2c);
        *param_2 = local_94;
        param_2[1] = local_90;
        param_2[2] = local_8c;
        *param_3 = local_88;
        param_3[1] = local_84;
        param_3[2] = local_80;
        iVar3 = FUN_005aad90(&local_88,&local_94);
        if (iVar3 == 0) {
          iVar3 = FUN_005f5e90(2,&local_94,&local_88,*(undefined4 *)(param_1 + 0xcd0));
          if ((iVar3 != 0) != 0) {
            *(undefined4 *)(param_5 + 0x34) = local_94;
            *(undefined4 *)(param_5 + 0x38) = local_90;
            *(undefined4 *)(param_5 + 0x3c) = local_8c;
            *(undefined4 *)(param_5 + 0x40) = local_88;
            *(undefined4 *)(param_5 + 0x44) = local_84;
            *(undefined4 *)(param_5 + 0x48) = local_80;
            uVar5 = FUN_00588ac0(*(undefined4 *)(param_1 + 0xdb4 + local_9c * 4));
            *(undefined4 *)(param_5 + 0x74) = uVar5;
            local_4 = 0xffffffff;
            FUN_005f4100();
            ExceptionList = local_c;
            return (uint)(iVar3 != 0);
          }
        }
        local_4 = 0xffffffff;
        FUN_005f4100();
      }
      else {
        uVar4 = FUN_004e52d5(iVar3 + 0x100,param_2,param_3,param_5,*(undefined4 *)(param_1 + 0xcd0))
        ;
        if ((uVar4 & 1) != 0) {
          ExceptionList = local_c;
          return uVar4;
        }
      }
    }
    piVar7 = piVar7 + 1;
    local_9c = local_9c + 1;
  } while (local_9c < 6);
  ExceptionList = local_c;
  return 0;
}

