
/* WARNING: Removing unreachable block (ram,0x004780c5) */
/* WARNING: Removing unreachable block (ram,0x004780c9) */
/* WARNING: Removing unreachable block (ram,0x004780d7) */
/* WARNING: Removing unreachable block (ram,0x004780d9) */
/* WARNING: Removing unreachable block (ram,0x004780db) */

uint __thiscall FUN_00478040(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar2 = (undefined4 *)param_1[1];
  puVar6 = (undefined4 *)*param_1;
  do {
    if (puVar6 == puVar2) {
LAB_004780a3:
      puVar2 = (undefined4 *)param_1[1];
      if (puVar6 != puVar2) {
        param_1[1] = param_1[1] + (((int)puVar2 - (int)puVar6) / 0x28) * -0x28;
        return 1;
      }
      return (uint)puVar2 & 0xffffff00;
    }
    if (puVar6[1] == param_2) {
      puVar3 = puVar6;
      if (puVar6 != puVar2) {
        while (puVar7 = puVar3 + 10, puVar7 != puVar2) {
          piVar1 = puVar3 + 0xb;
          puVar3 = puVar7;
          if (*piVar1 != param_2) {
            puVar5 = puVar6 + 10;
            puVar8 = puVar6;
            for (iVar4 = 10; puVar6 = puVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
        }
      }
      goto LAB_004780a3;
    }
    puVar6 = puVar6 + 10;
  } while( true );
}

