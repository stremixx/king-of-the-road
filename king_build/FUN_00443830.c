
void __thiscall FUN_00443830(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint _Size;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063df30;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  puVar4 = param_2 + 6;
  puVar5 = param_1 + 6;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  puVar4 = param_1 + 0x1e;
  iVar3 = (int)(param_2[0x1f] - param_2[0x1e]) >> 4;
  piVar1 = (void *)0x0;
  *puVar4 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (iVar3 != 0) {
    _Size = iVar3 * 0x10;
    if (_Size < 0x81) {
      FUN_00401aa0();
      local_c = 0;
      piVar1 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)FUN_0044bcf0(_Size);
      }
      else {
        *(int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = *piVar1;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar1 = _malloc(_Size);
      if (piVar1 == (void *)0x0) {
        piVar1 = (int *)FUN_00458210(_Size);
      }
    }
  }
  *puVar4 = piVar1;
  param_1[0x1f] = piVar1;
  param_1[0x20] = (void *)(iVar3 * 0x10 + (int)piVar1);
  local_c = 1;
  uVar2 = FUN_004662a0(param_2[0x1e],param_2[0x1f],piVar1,puVar4);
  param_1[0x1f] = uVar2;
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  ExceptionList = local_14;
  return;
}

