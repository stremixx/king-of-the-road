
void __fastcall FUN_006029e0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint local_4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  pbVar1 = (byte *)(*(int *)(param_1 + 4) + iVar2);
  local_4 = (uint)*pbVar1;
  switch(local_4) {
  case 7:
    *(int *)(param_1 + 0x18) = iVar2 + 0x1e;
    FUN_006028c0(&local_4);
    return;
  case 0x2a:
  case 0x2d:
    *(int *)(param_1 + 0x18) = iVar2 + 9;
    FUN_006028c0(&local_4);
    return;
  case 0x78:
    *(int *)(param_1 + 0x18) = *(int *)(pbVar1 + 5) + 9 + iVar2;
  }
  FUN_006028c0(&local_4);
  return;
}

