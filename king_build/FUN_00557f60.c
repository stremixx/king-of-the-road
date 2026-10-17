
void __thiscall FUN_00557f60(int param_1,int param_2)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined4 *)(param_1 + 0x51c8) = 0;
  *(int *)(param_1 + 0x5578) = param_2;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x10;
  }
  *(int *)(param_1 + 0x2538) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x5460) + 0x2770) = 1;
  local_c = -DAT_00701590;
  local_8 = -DAT_00701594;
  local_4 = -DAT_00701598;
  fVar1 = (float10)FUN_004ee500(&local_c);
  FUN_004ee350((float)fVar1);
  *(undefined4 *)(param_1 + 0x5580) = 0;
  *(undefined4 *)(param_1 + 0x5584) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x5460) + 0x278c) =
       *(undefined4 *)(*(int *)(param_1 + 0x5578) + 0xcd4);
  *(undefined4 *)(param_1 + 0x557c) = 0;
  return;
}

