
void FUN_0062d050(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  DAT_0077a428 = 2;
  if (DAT_0077a454 != 0) {
    do {
      uVar3 = DAT_0077a42c;
      uVar1 = (uint)*(byte *)((int)&DAT_00759df0 + DAT_0077a42c + 2) ^ (DAT_0077a434 & 0x3ff) << 5;
      uVar4 = (uint)(ushort)(&DAT_00749df0)[uVar1];
      DAT_0077a434 = uVar1;
      *(undefined2 *)((int)&DAT_00739df0 + (DAT_0077a42c & 0x7fff) * 2) = (&DAT_00749df0)[uVar1];
      (&DAT_00749df0)[uVar1] = (short)uVar3;
      if (((uVar4 != 0) && (uVar3 - uVar4 < 0x7efb)) &&
         (uVar5 = FUN_0062caf0(uVar4), uVar3 = DAT_0077a42c, DAT_0077a454 < uVar5)) {
        uVar5 = DAT_0077a454;
      }
      if (uVar5 < 3) {
        iVar2 = FUN_0062dea0(0,*(undefined1 *)((int)&DAT_00759df0 + uVar3));
        DAT_0077a454 = DAT_0077a454 - 1;
        DAT_0077a42c = DAT_0077a42c + 1;
      }
      else {
        iVar2 = FUN_0062dea0(uVar3 - DAT_0077a44c,uVar5 - 3);
        DAT_0077a454 = DAT_0077a454 - uVar5;
        if (DAT_0077a430 < uVar5) {
          DAT_0077a42c = DAT_0077a42c + uVar5;
          uVar5 = 0;
          DAT_0077a434 = (uint)*(byte *)((int)&DAT_00759df0 + DAT_0077a42c) << 5 ^
                         (uint)*(byte *)((int)&DAT_00759df0 + DAT_0077a42c + 1);
        }
        else {
          iVar6 = uVar5 - 1;
          do {
            uVar5 = DAT_0077a42c;
            DAT_0077a42c = uVar5 + 1;
            DAT_0077a434 = (DAT_0077a434 & 0x3ff) << 5 ^
                           (uint)*(byte *)((int)&DAT_00759df0 + uVar5 + 3);
            iVar6 = iVar6 + -1;
            *(undefined2 *)((int)&DAT_00739df0 + (DAT_0077a42c & 0x7fff) * 2) =
                 (&DAT_00749df0)[DAT_0077a434];
            (&DAT_00749df0)[DAT_0077a434] = (short)DAT_0077a42c;
          } while (iVar6 != 0);
          DAT_0077a42c = uVar5 + 2;
          uVar5 = 0;
        }
      }
      if (iVar2 != 0) {
        if ((int)DAT_0077a450 < 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)&DAT_00759df0 + DAT_0077a450;
        }
        FUN_0062d5a0(iVar2,DAT_0077a42c - DAT_0077a450,0);
        DAT_0077a450 = DAT_0077a42c;
      }
      while ((DAT_0077a454 < 0x106 && (DAT_0077a438 == 0))) {
        FUN_0062cc40();
      }
    } while (DAT_0077a454 != 0);
    DAT_0077a454 = 0;
  }
  if (-1 < (int)DAT_0077a450) {
    FUN_0062d5a0((int)&DAT_00759df0 + DAT_0077a450,DAT_0077a42c - DAT_0077a450,1);
    return;
  }
  FUN_0062d5a0(0,DAT_0077a42c - DAT_0077a450,1);
  return;
}

