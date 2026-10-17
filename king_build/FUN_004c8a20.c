
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8a20(undefined4 param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = FUN_00631d33(0x8ac);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_004c81b0();
  }
  FUN_004c8090(piVar2);
  local_c = *param_3 - *(float *)(DAT_006d0fd8 + 0x5b4);
  local_8 = param_3[1] - *(float *)(DAT_006d0fd8 + 0x5b8);
  local_4 = param_3[2] - *(float *)(DAT_006d0fd8 + 0x5bc);
  fVar5 = (float10)FUN_005aabc0(&local_c);
  uVar4 = 2;
  if ((float10)_DAT_0064b31c <= fVar5) {
    if ((float10)_DAT_0064b438 <= fVar5) {
      if (fVar5 < (float10)_DAT_0064b8f0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  iVar1 = (**(code **)(*piVar2 + 4))(param_1,param_2,param_3,uVar4);
  if ((iVar1 == 0) && (puVar3 = (undefined4 *)FUN_004c80d0(), puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  return;
}

