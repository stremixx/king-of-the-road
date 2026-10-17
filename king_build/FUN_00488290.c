
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00488290(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_38 [13];
  
  puVar6 = local_38;
  iVar7 = 3;
  do {
    *puVar6 = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    puVar6[3] = 0;
    puVar6 = puVar6 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  dVar1 = param_1 * _DAT_0064ae90 * _DAT_0064ae80;
  dVar2 = param_1 * _DAT_0064ae88 * _DAT_0064ae80;
  dVar3 = _DAT_0064a660 - dVar1;
  dVar5 = -dVar2;
  dVar1 = dVar1 + _DAT_0064a660;
  dVar4 = dVar3 * dVar3 + dVar5 * dVar5;
  FUN_004881c0((dVar1 * dVar3 + dVar5 * dVar2) / dVar4,(dVar2 * dVar3 - dVar5 * dVar1) / dVar4);
  return;
}

