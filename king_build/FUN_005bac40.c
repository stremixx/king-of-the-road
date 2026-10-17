
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bac40(ushort *param_1,int param_2,double param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  puVar6 = param_1;
  fVar7 = (float10)param_3;
  if ((fVar7 <= (float10)_DAT_0064ca48) && (param_2 != 0)) {
    param_1 = (ushort *)param_2;
    do {
      uVar1 = *puVar6;
      uVar4 = (byte)(uVar1 >> 8) & 0xf;
      uVar5 = (uint)(byte)((byte)uVar1 >> 4);
      if ((float10)_DAT_0064a668 <= fVar7) {
        uVar2 = __ftol();
        uVar2 = uVar2 & 0xf000 | (ushort)((uVar4 << 4 | uVar5) << 4);
        fVar7 = extraout_ST0_00;
      }
      else {
        iVar3 = __ftol();
        uVar2 = (ushort)(((iVar3 << 4 | uVar4) << 4 | uVar5) << 4);
        fVar7 = extraout_ST0;
      }
      *puVar6 = uVar2 | uVar1 & 0xf;
      puVar6 = puVar6 + 1;
      param_1 = (ushort *)((int)param_1 + -1);
    } while (param_1 != (ushort *)0x0);
  }
  return;
}

