
void __thiscall FUN_005ae0c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_0071efdc = 0;
  DAT_0071efcc = 0;
  DAT_0071efd0 = 0;
  DAT_0071efd4 = 0;
  DAT_0071efd8 = 0;
  *(undefined4 *)(param_1 + 0x20f0) = 0;
  *(undefined4 *)(param_1 + 0x20e8) = 0;
  *(undefined4 *)(param_1 + 0x20ec) = 0;
  *(undefined4 *)(param_1 + 0x20f4) = 0;
  DAT_00701dd4 = 0;
  DAT_00701dd8 = 0;
  DAT_00701ddc = 0;
  puVar2 = (undefined4 *)(param_1 + 0x2058);
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x2030) = 0;
  *(undefined4 *)(param_1 + 0x21b8) = 0;
  DAT_00701dcc = 0;
  if (-1 < param_2) {
    FUN_005b64b0(param_2,0);
  }
  (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,0,0xc,1);
  return;
}

