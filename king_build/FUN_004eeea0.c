
void __fastcall FUN_004eeea0(int param_1)

{
  float *pfVar1;
  float fVar2;
  
  *(float *)(param_1 + 0x40) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x44) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x48) = DAT_007015b8;
  *(float *)(param_1 + 0xa08) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xa0c) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xa10) = DAT_007015b8;
  *(float *)(param_1 + 0xdc) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xe0) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xe4) = DAT_007015b8;
  *(float *)(param_1 + 0x9f0) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x9f4) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x9f8) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  *(undefined4 *)(param_1 + 0xdc4) = 0;
  *(float *)(param_1 + 0xc90) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xc94) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xc98) = DAT_007015b8;
  *(float *)(param_1 + 0xc6c) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xc70) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xc74) = DAT_007015b8;
  *(float *)(param_1 + 0xc9c) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xca0) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xca4) = DAT_007015b8;
  pfVar1 = (float *)(param_1 + 0xa38);
  *(float *)(param_1 + 0x9fc) = *pfVar1;
  *(undefined4 *)(param_1 + 0xa00) = *(undefined4 *)(param_1 + 0xa3c);
  *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(param_1 + 0xa40);
  fVar2 = *(float *)(param_1 + 0x9f0) * *pfVar1 +
          *(float *)(param_1 + 0x9f4) * *(float *)(param_1 + 0xa3c) +
          *(float *)(param_1 + 0x9f8) * *(float *)(param_1 + 0xa40);
  *(undefined4 *)(param_1 + 0xdc8) = 0;
  *(float *)(param_1 + 0xa20) = fVar2 * *pfVar1;
  *(float *)(param_1 + 0xa24) = fVar2 * *(float *)(param_1 + 0xa3c);
  *(undefined4 *)(param_1 + 0xd7c) = 0x41200000;
  *(float *)(param_1 + 0xa28) = fVar2 * *(float *)(param_1 + 0xa40);
  *(undefined4 *)(param_1 + 0xd58) = *(undefined4 *)(param_1 + 0xd40);
  *(undefined4 *)(param_1 + 0xd5c) = *(undefined4 *)(param_1 + 0xd44);
  *(undefined4 *)(param_1 + 0xd60) = *(undefined4 *)(param_1 + 0xd48);
  return;
}

