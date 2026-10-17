
void __thiscall FUN_005bd250(int param_1,int param_2)

{
  uint *puVar1;
  
  if ((DAT_00701ea8 != (code *)0x0) && (param_2 != *(int *)(param_1 + 0x124))) {
    (*DAT_00701ea8)(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x124) + 0x11c);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(int *)(param_1 + 0x124) = param_2;
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 1;
  }
  return;
}

