
void FUN_005bcdc0(int param_1,int *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  
  if ((param_3 & 2) == 0) {
    if ((param_3 & 4) == 0) {
      if ((param_3 & 8) == 0) {
        if ((param_3 & 0x20) == 0) {
          if ((param_3 & 0x40) == 0) {
            if ((param_3 & 1) == 0) {
              if ((param_3 & 0x10) == 0) goto LAB_005bcef9;
              uVar1 = FUN_005b61b0(3);
              *(undefined1 *)(param_1 + 0x5c) = (undefined1)param_4;
              FUN_005b7d70(param_1,*param_2,param_2[1],param_11);
            }
            else {
              uVar1 = FUN_005b61b0(2);
              *(undefined4 *)(param_1 + 0x58) = param_10;
              FUN_005b6640(param_1,param_2,param_4,0);
            }
          }
          else {
            uVar1 = FUN_005b61b0(2);
            *(undefined4 *)(param_1 + 0x58) = param_10;
            FUN_005b8030(param_1,*param_2,param_2[1],param_12,0);
          }
        }
        else {
          uVar1 = FUN_005b61b0(2);
          *(undefined4 *)(param_1 + 0x58) = param_10;
          FUN_005b86d0(param_1,param_2,param_11);
        }
        FUN_005b61b0(uVar1);
      }
      else {
        FUN_005b8030(param_1,*param_2 + param_8,param_2[1] + param_9,param_12,0);
      }
    }
    else {
      FUN_005b7d70(param_1,*param_2 + param_8,param_2[1] + param_9,param_11);
    }
  }
  else {
    FUN_005b6640(param_1,param_2,param_4,0);
  }
LAB_005bcef9:
  if ((param_3 & 0x100) == 0) {
    if ((param_3 & 0x200) != 0) {
      uVar1 = FUN_005b61b0(2);
      *(undefined4 *)(param_1 + 0x58) = param_10;
      FUN_005b75d0(param_1,*param_2,param_2[1],param_2[3],param_6,0);
      FUN_005b7390(param_1,param_2[3],*param_2,param_2[2],param_7,0);
      FUN_005b75d0(param_1,param_2[2],param_2[3],param_2[1],param_7,0);
      FUN_005b7390(param_1,param_2[1],param_2[2],*param_2,param_6,0);
      FUN_005b61b0(uVar1);
    }
    return;
  }
  FUN_005b75d0(param_1,*param_2,param_2[1],param_2[3],param_6,0);
  FUN_005b7390(param_1,param_2[3],*param_2,param_2[2],param_7,0);
  FUN_005b75d0(param_1,param_2[2],param_2[3],param_2[1],param_7,0);
  FUN_005b7390(param_1,param_2[1],param_2[2],*param_2,param_6,0);
  return;
}

