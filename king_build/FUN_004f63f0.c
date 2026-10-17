
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f63f0(int param_1,short *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 0x34b0) = *(undefined4 *)(param_1 + 0x2640);
  *(undefined4 *)(param_1 + 0x34b8) = *(undefined4 *)(param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x34bc) = *(undefined4 *)(param_1 + 0x1f4c);
  *(undefined4 *)(param_1 + 0x34c0) = *(undefined4 *)(param_1 + 0x1f50);
  *(int *)(param_1 + 0x34ac) = (int)*(short *)(param_1 + 0x2740);
  FUN_004f0270(param_2);
  FUN_004effa0();
  FUN_004f0060();
  *(undefined4 *)(param_1 + 0x3368) = *(undefined4 *)(param_1 + 0x1a20);
  *(undefined4 *)(param_1 + 0x2b40) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x2b44) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x2b48) = *(undefined4 *)(param_1 + 0xd8);
  FUN_004e1fd9();
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    param_2 = (short *)(param_1 + 0x19a4);
    puVar4 = (undefined4 *)(param_1 + 0x2b50);
    puVar2 = (undefined4 *)(param_1 + 0x336c);
    do {
      *puVar2 = puVar2[-0x934];
      puVar2[8] = puVar2[-0x64f];
      iVar5 = iVar5 + 1;
      puVar6 = puVar4 + -0xa96;
      puVar7 = puVar4;
      for (iVar3 = 0x3e; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = puVar4 + 0x3e;
      puVar2[-9] = puVar2[-0x965];
      puVar2[0x36] = (int)*param_2;
      param_2 = param_2 + 1;
      puVar2[0x40] = (int)*(char *)(param_1 + 0x19c3 + iVar5);
      puVar2[8] = puVar2[-0x64f];
      puVar2[0x48] = puVar2[-0x666];
      puVar2 = puVar2 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xdd4));
  }
  fVar1 = (float)_DAT_0064a590;
  *(int *)(param_1 + 0x3468) = (int)*(char *)(param_1 + 0x19ba);
  *(int *)(param_1 + 0x3464) = (int)*(char *)(param_1 + 0x19b4);
  *(uint *)(param_1 + 0x34c4) = (uint)(fVar1 < *(float *)(param_1 + 0x29dc));
  *(uint *)(param_1 + 0x34c8) = (uint)(*(int *)(param_1 + 0x1c1c) == 0);
  return;
}

