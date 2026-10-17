
void __thiscall FUN_004f0270(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int *piVar8;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  puVar6 = (undefined4 *)(param_1 + 0x29f0);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  pfVar5 = (float *)(param_1 + 0x900);
  pfVar7 = (float *)(param_1 + 0x2a20);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar7 = pfVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x2b4c) = *(undefined4 *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x331c) = (float)*(double *)(param_2 + 0x18);
  *(float *)(param_1 + 0x3320) = (float)*(double *)(param_2 + 0x20);
  *(float *)(param_1 + 0x3324) = (float)*(double *)(param_2 + 0x28);
  *(float *)(param_1 + 0x33ac) =
       *(float *)(param_1 + 0xd58) * *(float *)(param_1 + 0x900) +
       *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0xd60) +
       *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0xd5c);
  *(float *)(param_1 + 0x33b0) =
       *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0xd60) +
       *(float *)(param_1 + 0x904) * *(float *)(param_1 + 0xd58) +
       *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0xd5c);
  *(float *)(param_1 + 0x33b4) =
       *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0xd60) +
       *(float *)(param_1 + 0x908) * *(float *)(param_1 + 0xd58) +
       *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0xd5c);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar2 = (undefined4 *)(param_1 + 0x2a80);
    do {
      iVar4 = iVar4 + 1;
      *puVar2 = puVar2[-0xa87];
      puVar2[1] = puVar2[-0xa86];
      puVar2[2] = puVar2[-0xa85];
      puVar2[0x18] = puVar2[-0x371];
      puVar2[0x19] = puVar2[-0x370];
      puVar2[0x1a] = puVar2[-0x36f];
      puVar2 = puVar2 + 3;
    } while (iVar4 < *(int *)(param_1 + 0xdd4));
  }
  *(undefined4 *)(param_1 + 0x3c38) = *(undefined4 *)(param_1 + 0x29d8);
  *(undefined4 *)(param_1 + 0x3bd0) = *(undefined4 *)(param_1 + 0x29dc);
  *(undefined4 *)(param_1 + 0x3bd8) = *(undefined4 *)(param_1 + 0x1c1c);
  *(undefined4 *)(param_1 + 0x3c3c) = *(undefined4 *)(param_1 + 0x1c84);
  *(float *)(param_1 + 0x3c40) = *(float *)(param_1 + 0x1c84);
  if ((float)(&DAT_00696fd8)[*(int *)(param_1 + 0x8cc) * 0x25c] < *(float *)(param_1 + 0x1c84)) {
    *(undefined4 *)(param_1 + 0x3c40) = (&DAT_00696fd8)[*(int *)(param_1 + 0x8cc) * 0x25c];
  }
  *(undefined4 *)(param_1 + 0x3c44) = *(undefined4 *)(param_1 + 0x1c88);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x3c80) = *(undefined4 *)(param_1 + 0x1b24);
  *(undefined4 *)(param_1 + 0x3c90) = *(undefined4 *)(param_1 + 0x3cb4);
  *(undefined4 *)(param_1 + 0x3c94) = 0;
  if (*(int *)(param_1 + 0xdd4) < 1) {
    *(undefined4 *)(param_1 + 0x3c98) = *(undefined4 *)(param_1 + 0x3cc8);
    return;
  }
  piVar8 = (int *)(param_1 + 0x3cdc);
  do {
    iVar1 = *piVar8;
    piVar8 = piVar8 + 5;
    bVar3 = (byte)iVar4;
    iVar4 = iVar4 + 1;
    *(uint *)(param_1 + 0x3c94) = *(uint *)(param_1 + 0x3c94) | (uint)(iVar1 != 0) << (bVar3 & 0x1f)
    ;
  } while (iVar4 < *(int *)(param_1 + 0xdd4));
  *(undefined4 *)(param_1 + 0x3c98) = *(undefined4 *)(param_1 + 0x3cc8);
  return;
}

