
void FUN_0062cd40(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = false;
  uVar6 = 2;
  if (DAT_0077a444 < 4) {
    FUN_0062d050();
    return;
  }
  if (DAT_0077a454 != 0) {
    do {
      iVar3 = DAT_0077a44c;
      uVar4 = DAT_0077a42c;
      uVar5 = (DAT_0077a434 & 0x3ff) << 5 ^ (uint)*(byte *)((int)&DAT_00759df0 + DAT_0077a42c + 2);
      uVar2 = (uint)(ushort)(&DAT_00749df0)[uVar5];
      DAT_0077a434 = uVar5;
      *(undefined2 *)((int)&DAT_00739df0 + (DAT_0077a42c & 0x7fff) * 2) = (&DAT_00749df0)[uVar5];
      (&DAT_00749df0)[uVar5] = (short)uVar4;
      uVar7 = 2;
      DAT_0077a428 = uVar6;
      if (((uVar2 != 0) && (uVar6 < DAT_0077a430)) && (uVar4 - uVar2 < 0x7efb)) {
        uVar7 = FUN_0062caf0(uVar2);
        if (DAT_0077a454 < uVar7) {
          uVar7 = DAT_0077a454;
        }
        uVar4 = DAT_0077a42c;
        uVar5 = DAT_0077a434;
        if ((uVar7 == 3) && (0x1000 < DAT_0077a42c - DAT_0077a44c)) {
          uVar7 = 2;
        }
      }
      if ((DAT_0077a428 < 3) || (DAT_0077a428 < uVar7)) {
        uVar6 = uVar7;
        if (bVar1) {
          iVar3 = FUN_0062dea0(0,(&DAT_00759def)[uVar4]);
          if (iVar3 != 0) {
            if ((int)DAT_0077a450 < 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (int)&DAT_00759df0 + DAT_0077a450;
            }
            FUN_0062d5a0(iVar3,DAT_0077a42c - DAT_0077a450,0);
            DAT_0077a450 = DAT_0077a42c;
          }
          DAT_0077a42c = DAT_0077a42c + 1;
          DAT_0077a454 = DAT_0077a454 - 1;
          uVar5 = DAT_0077a434;
          uVar4 = DAT_0077a434;
        }
        else {
          DAT_0077a42c = uVar4 + 1;
          DAT_0077a454 = DAT_0077a454 - 1;
          bVar1 = true;
          uVar4 = DAT_0077a434;
        }
      }
      else {
        iVar3 = FUN_0062dea0((uVar4 - iVar3) + -1,DAT_0077a428 - 3);
        DAT_0077a454 = DAT_0077a454 + (1 - DAT_0077a428);
        DAT_0077a428 = DAT_0077a428 - 2;
        do {
          uVar6 = DAT_0077a42c;
          DAT_0077a42c = uVar6 + 1;
          DAT_0077a434 = (DAT_0077a434 & 0x3ff) << 5 ^
                         (uint)*(byte *)((int)&DAT_00759df0 + uVar6 + 3);
          DAT_0077a428 = DAT_0077a428 - 1;
          *(undefined2 *)((int)&DAT_00739df0 + (DAT_0077a42c & 0x7fff) * 2) =
               (&DAT_00749df0)[DAT_0077a434];
          (&DAT_00749df0)[DAT_0077a434] = (short)DAT_0077a42c;
        } while (DAT_0077a428 != 0);
        DAT_0077a42c = uVar6 + 2;
        bVar1 = false;
        uVar5 = DAT_0077a434;
        uVar4 = DAT_0077a434;
        uVar6 = 2;
        if (iVar3 != 0) {
          if ((int)DAT_0077a450 < 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)&DAT_00759df0 + DAT_0077a450;
          }
          FUN_0062d5a0(iVar3,DAT_0077a42c - DAT_0077a450,0);
          uVar5 = DAT_0077a434;
          uVar4 = DAT_0077a434;
          DAT_0077a450 = DAT_0077a42c;
        }
      }
      while ((DAT_0077a434 = uVar5, DAT_0077a454 < 0x106 && (DAT_0077a438 == 0))) {
        DAT_0077a434 = uVar4;
        FUN_0062cc40();
        uVar5 = DAT_0077a434;
        uVar4 = DAT_0077a434;
      }
    } while (DAT_0077a454 != 0);
    DAT_0077a434 = uVar4;
    if (bVar1) {
      FUN_0062dea0(0,(&DAT_00759def)[DAT_0077a42c]);
    }
  }
  if (-1 < (int)DAT_0077a450) {
    FUN_0062d5a0((int)&DAT_00759df0 + DAT_0077a450,DAT_0077a42c - DAT_0077a450,1);
    return;
  }
  FUN_0062d5a0(0,DAT_0077a42c - DAT_0077a450,1);
  return;
}

