
void FUN_004257e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  int *local_8;
  undefined4 local_4;
  
  iVar1 = DAT_006898e4;
  iVar2 = DAT_006898e0;
  DAT_0068c0c4 = 0;
  local_4 = FUN_00457bc0(DAT_006898e4,DAT_006898e4,DAT_006898e0);
  DAT_006898e4 = DAT_006898e4 + (iVar1 - iVar2 >> 2) * -4;
  local_8 = (int *)*DAT_0068a8f0;
  if (local_8 != DAT_0068a8f0) {
    do {
      iVar2 = FUN_0040a950(local_8);
      *(undefined1 *)(iVar2 + 0x1e8) = 0;
      uVar3 = extraout_ECX;
      FUN_0041d3f0(&local_8);
      FUN_004042b0(uVar3);
      FUN_004772b0();
      local_8 = (int *)*local_8;
    } while (local_8 != DAT_0068a8f0);
  }
  FUN_00425700();
  return;
}

