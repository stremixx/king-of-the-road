
void __fastcall FUN_005d95c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005ee8e0(0,s_Foreground_object_00681b88);
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  uVar1 = FUN_005ee8e0(0,s_Background_object_00681b74);
  *(undefined4 *)(param_1 + 0x210) = uVar1;
  uVar1 = FUN_005ee8e0(0,s_SkyDomeSpace_00681b64);
  *(undefined4 *)(param_1 + 0x1dc) = uVar1;
  uVar1 = FUN_005ee8e0(0,s_SkyDomeKey_00681b58);
  *(undefined4 *)(param_1 + 0x1e0) = uVar1;
  return;
}

