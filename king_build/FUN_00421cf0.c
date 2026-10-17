
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421cf0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  double *pdVar4;
  float10 fVar5;
  int iVar6;
  int *local_3c;
  uint local_38;
  undefined4 uStack_34;
  double local_30;
  double local_28;
  double local_20;
  double local_10;
  
  local_3c = (int *)*DAT_0068a8f0;
  if (local_3c != DAT_0068a8f0) {
    do {
      iVar2 = FUN_0040a950(local_3c);
      if (iVar2 != 0) {
        iVar2 = FUN_0040a950(local_3c);
        if (*(int *)(iVar2 + 0x54) == 9) {
          DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
          DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
          (&DAT_0068a928)[DAT_0068aa04] =
               (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
          uVar1 = (&DAT_0068a928)[DAT_0068aa04];
          fVar5 = (float10)FUN_00401000();
          local_38 = uVar1 % 0x78 + 900;
          uStack_34 = 0;
          if ((float10)local_38 < fVar5 - (float10)*(double *)(iVar2 + 0x3b0)) {
            if ((*(byte *)(iVar2 + 0x58) & 1) == 0) {
              puVar3 = (undefined4 *)(iVar2 + 0x130);
            }
            else {
              puVar3 = (undefined4 *)(iVar2 + 0x268);
            }
            pdVar4 = &local_30;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(undefined4 *)pdVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              pdVar4 = (double *)((int)pdVar4 + 4);
            }
            local_10 = _DAT_0068aa18 - local_28;
            if (_DAT_0064a748 <
                SQRT((_DAT_0068aa20 - local_20) * (_DAT_0068aa20 - local_20) +
                     local_10 * local_10 + (_DAT_0068aa10 - local_30) * (_DAT_0068aa10 - local_30)))
            {
              iVar6 = iVar2;
              FUN_0041d3f0(&local_3c);
              FUN_004042b0(iVar2);
              FUN_00446c50(iVar6);
            }
          }
        }
      }
      local_3c = (int *)*local_3c;
    } while (local_3c != DAT_0068a8f0);
  }
  FUN_00446ac0();
  return;
}

