
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420c80(void)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *local_14;
  uint local_10;
  undefined4 uStack_c;
  
  local_14 = (int *)*DAT_0068a8f0;
  if (local_14 != DAT_0068a8f0) {
    do {
      iVar2 = FUN_0040a950(local_14);
      if (iVar2 != 0) {
        iVar2 = FUN_0040a950(local_14);
        if (*(int *)(iVar2 + 0x54) == 2) {
          iVar2 = FUN_00474260();
          dVar1 = *(double *)(iVar2 + 0x30);
          DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
          uStack_c = 0;
          DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
          (&DAT_0068a928)[DAT_0068aa04] =
               (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
          local_10 = (uint)(&DAT_0068a928)[DAT_0068aa04] % 1000000;
          if (dVar1 * _DAT_0064a6a0 <= (double)local_10) {
            uVar7 = 0;
            uVar6 = 0x40100000;
            uVar5 = 0;
            uVar4 = 1000000;
            uVar3 = 1000000;
            FUN_0041d3f0(&local_14);
            FUN_004042b0(uVar3);
            FUN_00446cf0(uVar4,uVar5,uVar6,uVar7);
          }
        }
      }
      local_14 = (int *)*local_14;
    } while (local_14 != DAT_0068a8f0);
  }
  return;
}

