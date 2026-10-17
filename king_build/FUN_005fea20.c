
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005fea20(int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  ulonglong local_10;
  
  puVar5 = DAT_00722c8c;
  puVar4 = DAT_00722c88;
  dVar2 = _DAT_0064a668;
  for (puVar6 = DAT_00722c88; puVar6 != DAT_00722c8c; puVar6 = puVar6 + 0xe) {
    dVar2 = dVar2 + *(double *)(puVar6 + 10);
  }
  DAT_00722b94 = (DAT_00722b94 + 1) % 0x37;
  DAT_00722b98 = (DAT_00722b98 + 1) % 0x37;
  (&DAT_00722ab8)[DAT_00722b94] = (&DAT_00722ab8)[DAT_00722b94] - (&DAT_00722ab8)[DAT_00722b98];
  local_10 = (ulonglong)((uint)(&DAT_00722ab8)[DAT_00722b94] % 1000000);
  dVar2 = (double)local_10 * dVar2 * _DAT_0064a6c8;
  puVar6 = puVar4;
  for (dVar3 = _DAT_0064a668;
      (puVar7 = puVar4, puVar6 != puVar5 &&
      ((dVar2 < dVar3 || (puVar7 = puVar6, dVar3 + *(double *)(puVar6 + 10) < dVar2))));
      dVar3 = dVar3 + *pdVar1) {
    pdVar1 = (double *)(puVar6 + 10);
    puVar6 = puVar6 + 0xe;
  }
  for (; puVar4 != puVar7; puVar4 = puVar4 + 0xe) {
    fVar8 = (float10)FUN_00488180(0,0);
    *(double *)(puVar4 + 0xc) = (double)fVar8;
  }
  fVar8 = (float10)FUN_00488180(0,0x3ff00000);
  *(double *)(puVar7 + 0xc) = (double)fVar8;
  puVar6 = puVar7 + 0xe;
  if (puVar6 != DAT_00722c8c) {
    do {
      fVar8 = (float10)FUN_00488180(0,0);
      *(double *)(puVar6 + 0xc) = (double)fVar8;
      puVar6 = puVar6 + 0xe;
    } while (puVar6 != DAT_00722c8c);
  }
  puVar4 = DAT_00722c88;
  dVar2 = _DAT_0064a668;
  puVar6 = DAT_00722c88;
  if (DAT_00722c88 != DAT_00722c8c) {
    do {
      puVar5 = puVar4 + 0xe;
      *(double *)(puVar4 + 0xc) = *(double *)(puVar4 + 0xc) * *(double *)(puVar4 + 0xc);
      puVar4 = puVar5;
      dVar2 = _DAT_0064a668;
      puVar6 = DAT_00722c88;
    } while (puVar5 != DAT_00722c8c);
  }
  for (; puVar6 != DAT_00722c8c; puVar6 = puVar6 + 0xe) {
    if (dVar2 < *(double *)(puVar6 + 0xc)) {
      dVar2 = *(double *)(puVar6 + 0xc);
    }
  }
  puVar6 = DAT_00722c88;
  if (DAT_00722c88 != DAT_00722c8c) {
    do {
      puVar4 = puVar6 + 0xe;
      *(double *)(puVar6 + 10) = (dVar2 - *(double *)(puVar6 + 0xc)) / dVar2;
      puVar6 = puVar4;
    } while (puVar4 != DAT_00722c8c);
  }
  FUN_00602f90(*puVar7);
  FUN_00603080(0);
  FUN_006030f0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return 0;
}

