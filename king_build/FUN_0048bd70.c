
uint FUN_0048bd70(ushort *param_1,int param_2,ushort param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  ushort *puVar7;
  
  if ((param_2 != 0) && (param_3 != 1)) {
    if (param_4 != (undefined2 *)0x0) {
      puVar1 = param_4 + param_2 + -1;
      uVar6 = 0;
      if (param_4 <= puVar1) {
        puVar4 = puVar1;
        do {
          puVar5 = puVar4 + -1;
          uVar6 = uVar6 << 0x10 |
                  (uint)*(ushort *)((int)puVar4 + (int)param_1 + ((param_2 * 2 + -2) - (int)puVar1))
          ;
          uVar3 = (ulonglong)uVar6 / (ulonglong)(uint)param_3;
          *puVar4 = (short)uVar3;
          uVar6 = uVar6 - (uint)param_3 * (int)uVar3;
          puVar4 = puVar5;
        } while (param_4 <= puVar5);
      }
      return uVar6 & 0xffff;
    }
    uVar6 = 0;
    puVar7 = param_1 + param_2 + -1;
    if (param_1 <= puVar7) {
      do {
        uVar2 = *puVar7;
        puVar7 = puVar7 + -1;
        uVar6 = uVar6 << 0x10 | (uint)uVar2;
        uVar6 = uVar6 - (uVar6 / param_3) * (uint)param_3;
      } while (param_1 <= puVar7);
    }
    return uVar6 & 0xffff;
  }
  return 0;
}

