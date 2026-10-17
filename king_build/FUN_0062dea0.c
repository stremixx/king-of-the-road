
undefined4 FUN_0062dea0(int param_1,int param_2)

{
  int *piVar1;
  ushort *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  (&DAT_0072d594)[DAT_0077bf44] = (char)param_2;
  uVar7 = DAT_0077bf44 + 1;
  DAT_0077bf44 = uVar7;
  if (param_1 == 0) {
    (&DAT_0077bfec)[param_2 * 2] = (&DAT_0077bfec)[param_2 * 2] + 1;
  }
  else {
    iVar5 = param_1 + -1;
    *(short *)(&DAT_0077c3f0 + (uint)*(byte *)((int)&DAT_0077a488 + param_2) * 4) =
         *(short *)(&DAT_0077c3f0 + (uint)*(byte *)((int)&DAT_0077a488 + param_2) * 4) + 1;
    if (iVar5 < 0x100) {
      bVar3 = *(byte *)((int)&DAT_0077b5fc + param_1 + 3);
    }
    else {
      bVar3 = (&DAT_0077b700)[iVar5 >> 7];
    }
    (&DAT_0077d250)[(uint)bVar3 * 2] = (&DAT_0077d250)[(uint)bVar3 * 2] + 1;
    *(short *)((int)&DAT_00769f30 + DAT_0077bec8 * 2) = (short)iVar5;
    DAT_0077bec8 = DAT_0077bec8 + 1;
    DAT_0077a485 = DAT_0077a485 | DAT_0077a484;
  }
  uVar4 = DAT_0077bec8;
  bVar3 = DAT_0077a485;
  DAT_0077a484 = DAT_0077a484 << 1;
  if ((uVar7 & 7) == 0) {
    DAT_0077a485 = 0;
    DAT_0077a484 = '\x01';
    (&DAT_0077a588)[DAT_0077bfe8] = bVar3;
    DAT_0077bfe8 = DAT_0077bfe8 + 1;
  }
  if ((2 < DAT_00688738) && ((uVar7 & 0xfff) == 0)) {
    uVar6 = uVar7 * 8;
    iVar5 = 0;
    do {
      piVar1 = (int *)((int)&DAT_006893dc + iVar5);
      puVar2 = (ushort *)((int)&DAT_0077d250 + iVar5);
      iVar5 = iVar5 + 4;
      uVar6 = uVar6 + (*piVar1 + 5) * (uint)*puVar2;
    } while (iVar5 < 0x78);
    if ((uVar4 < uVar7 >> 1) &&
       ((uVar6 >> 2 & 0x3ffffffe) < (DAT_0077a42c - DAT_0077a450 & 0xfffffffeU))) {
      return 1;
    }
  }
  if ((uVar7 != 0x7fff) && (uVar4 != 0x8000)) {
    return 0;
  }
  return 1;
}

