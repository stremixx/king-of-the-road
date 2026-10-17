
void __fastcall FUN_00543440(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  FUN_00541ed0();
  *(int *)(param_1 + 0x2770) = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  uVar1 = FUN_005c29d0(*(undefined4 *)(param_1 + 0x2770),param_1 + 0x2778,
                       *(undefined4 *)(param_1 + 0x276c));
  *(undefined4 *)(param_1 + 0xd9c + *(int *)(param_1 + 0xdc0) * 4) = uVar1;
  *(int *)(param_1 + 0xdc0) = *(int *)(param_1 + 0xdc0) + 1;
  fVar2 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x2ab4) = (float)fVar2;
  uVar1 = FUN_005ee8e0(0,s_hit_flags_object_00678e34);
  *(undefined4 *)(param_1 + 0x2aa8) = uVar1;
  return;
}

