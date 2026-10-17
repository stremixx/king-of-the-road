
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FUN_005f1420(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_78;
  undefined4 *local_74;
  undefined1 local_6c [4];
  int local_68;
  undefined1 local_64 [80];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0064914b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_4 != param_1[0xd]) {
    ExceptionList = &local_14;
    param_1[0xd] = param_4;
    FUN_00631d5c();
    iVar2 = FUN_00631d33(param_1[0xd] << 2);
    param_1[0xc] = iVar2;
    iVar2 = 0;
    if (0 < param_1[0xd]) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1[0xc] + -4 + iVar2 * 4) = 0;
      } while (iVar2 < param_1[0xd]);
    }
  }
  iVar2 = 0;
  local_78 = 0;
  if (0 < param_1[0xd]) {
    do {
      local_74 = (undefined4 *)0x0;
      if ((param_1[4] != 7) || (local_78 != 1)) {
        while( true ) {
          if ((param_3 == 0) && (local_78 == param_1[0xd] + -1)) goto LAB_005f16a4;
          iVar2 = FUN_005aa810();
          if (iVar2 != 0x14d) break;
          puVar3 = (undefined4 *)FUN_005eee60(param_2,param_1[9],local_6c,param_5,param_6);
          if (puVar3 == (undefined4 *)0x0) {
            ExceptionList = local_14;
            return false;
          }
          if ((((puVar3[4] == 9) && ((char *)puVar3[3] != (char *)0x0)) &&
              (iVar2 = _strncmp((char *)puVar3[3],&DAT_00682af4,3), iVar2 == 0)) &&
             (puVar3[0x10] == 7)) {
            param_3 = param_3 + -1;
            iVar2 = FUN_005aa810();
            if (iVar2 != 0x22b) {
              ExceptionList = local_14;
              return false;
            }
            iVar2 = FUN_005eec70();
            if (*(int *)(iVar2 + 0x10) != 0xf) {
              FUN_0061c369(local_64,s_Road__s__must_be_placed_in_room_00682ad4);
              FUN_005d2520(local_64,0);
            }
            if (*(int *)(iVar2 + 0x40) == 0) {
              puVar4 = (undefined4 *)FUN_00631d33();
              if (puVar4 == (undefined4 *)0x0) {
                *(undefined4 *)(iVar2 + 0x40) = 0;
              }
              else {
                *puVar4 = 0;
                *(undefined4 **)(iVar2 + 0x40) = puVar4;
              }
            }
            local_68 = FUN_00631d33();
            local_c = 0;
            if (local_68 != 0) {
              fVar1 = _DAT_0064b440;
              if (puVar3[0xe] != 0) {
                fVar1 = *(float *)puVar3[0xf];
              }
              FUN_005bc310(puVar3[0x11],puVar3[0x12],puVar3[0xc],puVar3[0xd],(double)fVar1);
            }
            local_c = 0xffffffff;
            FUN_005bc910();
            (**(code **)*puVar3)();
          }
          else {
            param_3 = param_3 + -1;
            iVar2 = FUN_005aa810();
            if (iVar2 != 0x22b) {
              ExceptionList = local_14;
              return false;
            }
            if ((puVar3[4] == 2) && (*(int *)puVar3[0xc] == 0)) {
              (**(code **)*puVar3)();
            }
            else if (local_74 == (undefined4 *)0x0) {
              (**(code **)(*param_1 + 0x14))(local_78);
              local_74 = puVar3;
            }
            else {
              puVar3[0xb] = local_74[0xb];
              FUN_005d1840();
              puVar3[9] = local_74[9];
              local_74 = puVar3;
            }
          }
        }
        if (iVar2 != 0x1bc) {
          ExceptionList = local_14;
          return false;
        }
      }
LAB_005f16a4:
      iVar2 = local_78 + 1;
      local_78 = iVar2;
    } while (iVar2 < param_1[0xd]);
  }
  if (iVar2 != param_1[0xd]) {
    ExceptionList = local_14;
    return false;
  }
  ExceptionList = local_14;
  return param_3 == 0;
}

