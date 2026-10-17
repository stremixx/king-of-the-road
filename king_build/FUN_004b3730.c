
undefined4 FUN_004b3730(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *local_58 [2];
  uint local_50;
  undefined4 *local_3c;
  undefined1 *local_2c;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643dff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b50f0(local_58,0);
  uVar3 = param_3;
  local_4 = 1;
  FUN_004b2f10(param_2,param_3);
  iVar6 = 0;
  piVar1 = (int *)(uVar3 + 8);
  do {
    FUN_004abfc0(piVar1);
    uVar4 = FUN_004b2840(iVar6);
    FUN_004abfc0(uVar4);
    iVar5 = FUN_0061dce4(*local_3c);
    if (iVar5 == 0) {
      FUN_004abfc0(piVar1);
      uVar4 = FUN_004b2840(iVar6);
      FUN_004abfc0(uVar4);
      iVar5 = FUN_004b2a30(*local_1c);
      if (iVar5 == 0) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          FUN_004abfc0(piVar1);
          uVar4 = FUN_004b2840(0);
          FUN_004abfc0(uVar4);
          param_3 = CONCAT31(param_3._1_3_,*local_2c);
          if (local_58[0] == (int *)0x0) {
            FUN_004a5470(0,1);
          }
          if ((local_50 & 0x10000) != 0) {
            FUN_004a5470(4,1);
          }
          puVar2 = (undefined1 *)local_58[0][4];
          if (puVar2 == (undefined1 *)local_58[0][5]) {
            FUN_0044be90(puVar2,&param_3);
          }
          else {
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = (undefined1)param_3;
            }
            local_58[0][4] = local_58[0][4] + 1;
          }
          FUN_004b2bf0(1);
          if (*piVar1 == *(int *)(uVar3 + 0x10) + -4) {
            FUN_004b28d0();
          }
          else {
            *piVar1 = *piVar1 + 4;
          }
          *(int *)(uVar3 + 0x44) = *(int *)(uVar3 + 0x44) + 1;
        }
        param_3 = param_3 & 0xffffff00;
        if (local_58[0] == (int *)0x0) {
          FUN_004a5470(0,1);
        }
        if ((local_50 & 0x10000) != 0) {
          FUN_004a5470(4,1);
        }
        puVar2 = (undefined1 *)local_58[0][4];
        if (puVar2 == (undefined1 *)local_58[0][5]) {
          FUN_0044be90(puVar2,&param_3);
        }
        else {
          if (puVar2 != (undefined1 *)0x0) {
            *puVar2 = (undefined1)param_3;
          }
          local_58[0][4] = local_58[0][4] + 1;
        }
        FUN_00455dc0(local_58);
        local_4 = local_4 & 0xffffff00;
        if (((((local_50 & 0x10000) == 0) && (local_58[0] != (int *)0x0)) &&
            (local_58[0][1] = local_58[0][1] + -1, local_58[0][1] == 0)) &&
           (local_58[0] != (int *)0x0)) {
          (**(code **)(*local_58[0] + 0xc))(1);
        }
        ExceptionList = local_c;
        return param_1;
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

