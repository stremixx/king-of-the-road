
undefined4
FUN_004c57c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,float param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  
  if (DAT_006951ac == 100) {
    if (((DAT_00695184 != 0) && (*(int *)(DAT_00695184 + 0x1d4) != 0)) &&
       (iVar1 = *(int *)(*(int *)(DAT_00695184 + 0x1d4) + 0x3c), iVar1 != 0)) {
      FUN_0061c369(&DAT_00694fec,s_Invalid_number_of_static_glow_in_006717a0,iVar1,
                   *(undefined4 *)(DAT_00695184 + 0xb58),*(undefined4 *)(DAT_00695184 + 0xb5c),
                   *(undefined4 *)(DAT_00695184 + 0xb60),*(undefined4 *)(DAT_00695184 + 0xb64),
                   *(undefined4 *)(DAT_00695184 + 0xb68),*(undefined4 *)(DAT_00695184 + 0xb6c));
      FUN_005d2250(&DAT_00694fec,0);
    }
    return 0;
  }
  iVar1 = DAT_006951a8 + DAT_006951ac * 0x74;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(DAT_006951a8 + 0x44 + DAT_006951ac * 0x74) = param_1;
  iVar1 = DAT_006951a8 + DAT_006951ac * 0x74;
  *(undefined4 *)(iVar1 + 0x14) = *param_2;
  *(undefined4 *)(iVar1 + 0x18) = param_2[1];
  *(undefined4 *)(iVar1 + 0x1c) = param_2[2];
  *(undefined4 *)(iVar1 + 0x38) = *param_2;
  *(undefined4 *)(iVar1 + 0x3c) = param_2[1];
  *(undefined4 *)(iVar1 + 0x40) = param_2[2];
  *(undefined4 *)(iVar1 + 0x68) = *param_2;
  *(undefined4 *)(iVar1 + 0x6c) = param_2[1];
  *(undefined4 *)(iVar1 + 0x70) = param_2[2];
  *(undefined4 *)(DAT_006951a8 + 0x48 + DAT_006951ac * 0x74) = param_3;
  iVar2 = DAT_006951ac;
  iVar1 = DAT_006951a8;
  *(float *)(DAT_006951a8 + 0x50 + DAT_006951ac * 0x74) = param_5 * param_5;
  iVar1 = iVar1 + iVar2 * 0x74;
  *(undefined4 *)(iVar1 + 0x58) = param_7;
  *(undefined4 *)(iVar1 + 0x5c) = param_6;
  *(float *)(iVar1 + 0x54) = param_4 * param_4;
  *(undefined4 *)(*(int *)(DAT_006951a8 + 0x34 + DAT_006951ac * 0x74) + 0x24) = param_8;
  *(undefined4 *)(DAT_006951a8 + 0x4c + DAT_006951ac * 0x74) = param_9;
  *(byte *)(DAT_006951a8 + DAT_006951ac * 0x74 + 0x28) =
       *(byte *)(DAT_006951a8 + 0x28 + DAT_006951ac * 0x74) & 0xfe;
  DAT_006951ac = DAT_006951ac + 1;
  return 1;
}

