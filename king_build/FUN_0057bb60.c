
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057bb60(undefined4 param_1,undefined4 param_2,float *param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = FUN_00578f60();
  if (iVar2 != 0) {
    local_18 = *param_3 - *(float *)(DAT_006d0fd8 + 0x5b4);
    local_14 = param_3[1] - *(float *)(DAT_006d0fd8 + 0x5b8);
    local_10 = param_3[2] - *(float *)(DAT_006d0fd8 + 0x5bc);
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    fVar5 = (float10)FUN_005aabc0(&local_18);
    fVar1 = (float)fVar5;
    uVar4 = 2;
    if (_DAT_0064b31c <= fVar1) {
      if (_DAT_0064b438 <= fVar1) {
        if (_DAT_0064b8f0 <= fVar1) {
          if (fVar1 < _DAT_0064e504) {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 < param_4) {
      uVar4 = param_4;
    }
    switch(uVar4) {
    case 0:
      uVar3 = 0x20;
      break;
    case 1:
      uVar3 = 0x10;
      break;
    case 2:
    case 3:
      uVar3 = 4;
      break;
    default:
      uVar3 = 3;
    }
    iVar2 = FUN_00579170(param_1,param_2,param_3,uVar3,param_5,param_6);
    if (iVar2 == 0) {
      FUN_00578fa0();
    }
  }
  return;
}

