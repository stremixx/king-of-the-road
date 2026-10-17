
void __fastcall FUN_005415b0(undefined2 *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  undefined1 local_64 [100];
  
  param_1[10] = param_1[4];
  param_1[0xb] = *param_1;
  if (7 < *(byte *)(param_1 + 0x2a)) {
    *(undefined1 *)(param_1 + 0x2a) = 7;
  }
  cVar2 = '\0';
  uVar8 = *(uint *)(param_1 + 0x28) | (uint)*(byte *)(param_1 + 0x2a) << 7;
  *(uint *)(param_1 + 0x28) = uVar8;
  *(uint *)(param_1 + 0xc) = uVar8;
  switch(*(undefined4 *)(param_1 + 0x2e)) {
  case 0:
    cVar2 = '\0';
    break;
  case 1:
    cVar2 = '\x01';
    break;
  case 2:
    cVar2 = '\x02';
    break;
  case 3:
    cVar2 = '\x03';
    break;
  case 4:
    cVar2 = '\x04';
  }
  cVar1 = __ftol();
  iVar7 = 0;
  *(char *)(param_1 + 0xe) = cVar2 + cVar1 * -8;
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x30);
  iVar9 = 10;
  if (0 < *(int *)(param_1 + 8)) {
    puVar6 = (undefined4 *)(param_1 + 0x46);
    do {
      *(undefined1 *)((int)param_1 + iVar9 + 0x14) = *(undefined1 *)((int)param_1 + iVar7 + 0x61);
      fVar11 = (float10)FUN_004e3a69(puVar6[-8],s__NetVehIn_put_1_00678da8,0x40490fdb);
      FUN_00541980((float)fVar11);
      uVar8 = __ftol();
      *(char *)((int)param_1 + iVar9 + 0x15) = (char)(uVar8 & 0x3ff);
      *(char *)((int)param_1 + iVar9 + 0x16) = (char)((uVar8 & 0x3ff) >> 8);
      FUN_00541980(*puVar6,0x3f333333);
      cVar2 = __ftol();
      puVar6 = puVar6 + 1;
      *(byte *)((int)param_1 + iVar9 + 0x16) = *(byte *)((int)param_1 + iVar9 + 0x16) | cVar2 << 2;
      iVar9 = iVar9 + 3;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 8));
  }
  pfVar5 = (float *)(param_1 + 0x68);
  iVar7 = 4;
  *(byte *)(iVar9 + 0x14 + (int)param_1) =
       ((*(char *)((int)param_1 + 0xc1) << 1 | *(byte *)(param_1 + 0x60)) << 1 |
       *(byte *)((int)param_1 + 0xbf)) << 1 | *(byte *)(param_1 + 0x5f);
  iVar9 = iVar9 + 1;
  do {
    fVar11 = (float10)FUN_004e3a69(*(float *)(param_1 + 0x62) - *pfVar5,s__NetVehIn_put_6_00678d98,
                                   0x40490fd0);
    FUN_00541980((float)fVar11);
    uVar3 = __ftol();
    *(undefined1 *)((int)param_1 + iVar9 + 0x14) = uVar3;
    iVar9 = iVar9 + 1;
    pfVar5 = pfVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar6 = (undefined4 *)(param_1 + 0x7e);
  iVar7 = 4;
  do {
    iVar10 = iVar9;
    FUN_00541980(puVar6[-1],0x3f800000);
    uVar3 = __ftol();
    *(undefined1 *)((int)param_1 + iVar10 + 0x14) = uVar3;
    FUN_00541980(*puVar6,0x3f800000);
    uVar3 = __ftol();
    *(undefined1 *)((int)param_1 + iVar10 + 0x15) = uVar3;
    puVar6 = puVar6 + 3;
    iVar7 = iVar7 + -1;
    iVar9 = iVar10 + 2;
  } while (iVar7 != 0);
  *(char *)(iVar10 + 0x16 + (int)param_1) =
       *(char *)(param_1 + 0x5e) * '\x10' + *(char *)((int)param_1 + 0xbd);
  iVar9 = iVar10 + 3;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    param_1[10] = (short)iVar9;
    if (iVar9 != *(int *)(param_1 + 2)) {
      FUN_0061c369(local_64,s__NetVehIn__put_____c__d_>comsize_00678d70,iVar9,*(int *)(param_1 + 2))
      ;
      FUN_004e1e9c(local_64);
      return;
    }
  }
  else {
    FUN_00541980(*(undefined4 *)(param_1 + 0x58),0x42c80000);
    uVar3 = __ftol();
    *(undefined1 *)(iVar10 + 0x17 + (int)param_1) = uVar3;
    uVar4 = __ftol();
    *(undefined2 *)(iVar10 + 0x18 + (int)param_1) = uVar4;
    FUN_00541980(*(undefined4 *)(param_1 + 0x5a),0x42c80000);
    uVar3 = __ftol();
    *(undefined1 *)(iVar10 + 0x1a + (int)param_1) = uVar3;
    FUN_00541980(*(undefined4 *)(param_1 + 0x5c),0x3f800000);
    uVar3 = __ftol();
    *(undefined1 *)(iVar10 + 0x1b + (int)param_1) = uVar3;
    uVar3 = __ftol();
    *(undefined1 *)(iVar10 + 0x1c + (int)param_1) = uVar3;
    if ((*(int *)(param_1 + 0x9a) < 0) || (7 < *(int *)(param_1 + 0x9a))) {
      FUN_004e1e9c(s__NetVehIn__put____nr_engine_stat_00678d38);
    }
    *(byte *)(iVar10 + 0x1d + (int)param_1) =
         (*(char *)(param_1 + 0x9e) << 4 | *(byte *)(param_1 + 0x9a)) << 2 |
         -(*(int *)(param_1 + 0x9c) != 0) & 0x20U | -(*(int *)(param_1 + 0x98) != 0) & 2U |
         *(int *)(param_1 + 0x96) != 0;
    *(bool *)(iVar10 + 0x1e + (int)param_1) = *(int *)(param_1 + 0xa0) != 0;
    FUN_00541980(*(undefined4 *)(param_1 + 0xa2),0x3f800000);
    uVar3 = __ftol();
    *(undefined1 *)(iVar10 + 0x1f + (int)param_1) = uVar3;
    FUN_00541980(*(undefined4 *)(param_1 + 0xa4),0x3f800000);
    uVar3 = __ftol();
    *(undefined1 *)(iVar10 + 0x20 + (int)param_1) = uVar3;
    iVar10 = iVar10 + 0xd;
    if ((0x3a < iVar10) || (iVar10 != *(int *)(param_1 + 4))) {
      FUN_0061c369(local_64,s__NetVehIn__put_____c__d_>NETVAR__00678cfc,iVar10,0x3a,
                   *(undefined4 *)(param_1 + 4));
      FUN_004e1e9c(local_64);
    }
  }
  return;
}

