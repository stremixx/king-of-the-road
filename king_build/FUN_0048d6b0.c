
void __fastcall FUN_0048d6b0(int param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  puVar2 = *(undefined8 **)(param_1 + 0x24);
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x20) < *(undefined8 **)(param_1 + 0x24)) {
    do {
      uVar1 = puVar2[-3];
      puVar3 = puVar2 + -3;
      puVar6 = puVar5 + 3;
      puVar7 = puVar5;
      puVar8 = local_20;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *(undefined4 *)puVar7;
        puVar7 = (undefined8 *)((int)puVar7 + 4);
        puVar8 = puVar8 + 1;
      }
      *puVar5 = uVar1;
      puVar5[1] = puVar2[-2];
      puVar5[2] = puVar2[-1];
      puVar2[-2] = local_18;
      *(undefined4 *)puVar3 = local_20[0];
      puVar2[-1] = local_10;
      *(undefined4 *)((int)puVar2 + -0x14) = local_20[1];
      puVar2 = puVar3;
      puVar5 = puVar6;
    } while (puVar6 < puVar3);
  }
  return;
}

