
undefined4 * __thiscall FUN_0044add0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  int local_14;
  
  local_14 = (*(int *)(param_1 + 4) - param_3) / 0xc0;
  local_18 = param_2;
  if (0 < local_14) {
    puVar2 = (undefined4 *)(param_3 + 0x10);
    do {
      *local_18 = puVar2[-4];
      local_18[2] = puVar2[-2];
      local_18[3] = puVar2[-1];
      puVar3 = puVar2;
      puVar4 = (undefined4 *)((int)puVar2 + ((int)param_2 - param_3));
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      local_18[0xc] = puVar2[8];
      FUN_0044c100(puVar2 + 9);
      FUN_0044c100(puVar2 + 0xc);
      FUN_0044c100(puVar2 + 0xf);
      FUN_0044c100(puVar2 + 0x12);
      local_18[0x19] = puVar2[0x15];
      local_18[0x1a] = puVar2[0x16];
      local_18[0x1b] = puVar2[0x17];
      local_18[0x1c] = puVar2[0x18];
      local_18[0x1e] = puVar2[0x1a];
      local_18[0x1f] = puVar2[0x1b];
      local_18[0x20] = puVar2[0x1c];
      local_18[0x21] = puVar2[0x1d];
      local_18[0x22] = puVar2[0x1e];
      local_18[0x23] = puVar2[0x1f];
      local_18[0x24] = puVar2[0x20];
      local_18[0x25] = puVar2[0x21];
      local_18[0x26] = puVar2[0x22];
      local_18[0x27] = puVar2[0x23];
      local_18[0x28] = puVar2[0x24];
      local_18[0x29] = puVar2[0x25];
      local_18[0x2a] = puVar2[0x26];
      local_18[0x2b] = puVar2[0x27];
      local_18[0x2c] = puVar2[0x28];
      local_18[0x2d] = puVar2[0x29];
      *(undefined1 *)(local_18 + 0x2e) = *(undefined1 *)(puVar2 + 0x2a);
      FUN_004427d0();
      local_18 = local_18 + 0x30;
      puVar2 = puVar2 + 0x30;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  for (; local_18 != puVar2; local_18 = local_18 + 0x30) {
    FUN_00418590();
  }
  iVar1 = (int)((ulonglong)((longlong)(param_3 - (int)param_2) * -0x2aaaaaab) >> 0x20);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + ((iVar1 >> 5) - (iVar1 >> 0x1f)) * 0xc0;
  return param_2;
}

