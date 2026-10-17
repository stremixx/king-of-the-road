
void __thiscall FUN_00614d30(int *param_1,int param_2)

{
  DWORD DVar1;
  
  if (param_2 == *(int *)(*(int *)(DAT_006cdbcc + 0x54c) + 0x1d0)) {
    DVar1 = timeGetTime();
    *(DWORD *)(*param_1 + 0x68) = DVar1;
    FUN_0060b970();
  }
  (**(code **)(**(int **)(*param_1 + 4) + 0x18))(param_1[0x1b],param_2);
  if ((((param_1[0x14] != 0) && (param_1[0x15] != 0)) && (param_1[0x16] != 0)) &&
     ((param_1[0x17] != 0 && (param_1[0x18] != 0)))) {
    FUN_006192e0(&stack0xffffffe0);
    FUN_00618f10(param_2);
    FUN_00618f10(param_2);
    FUN_00618f10(param_2);
    FUN_00618f10(param_2);
    FUN_00618f10(param_2);
  }
  return;
}

