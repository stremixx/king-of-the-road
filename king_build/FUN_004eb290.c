
void __fastcall FUN_004eb290(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  fVar3 = (float10)FUN_004e2035();
  *(double *)(param_1 + 0x38) = (double)fVar3;
  *(double *)(param_1 + 0x30) = (double)fVar3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  iVar2 = 5;
  puVar1 = (undefined4 *)(param_1 + 0x104);
  do {
    iVar2 = iVar2 + -1;
    *puVar1 = DAT_007015b0;
    puVar1[1] = DAT_007015b4;
    puVar1[2] = DAT_007015b8;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

