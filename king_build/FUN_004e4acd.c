
void FUN_004e4acd(int param_1,int param_2)

{
  if (param_1 == 0) {
    FUN_004e3e9b(0,s_SetHideNode_00672c1c);
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
  }
  return;
}

