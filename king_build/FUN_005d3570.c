
void FUN_005d3570(int param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 local_4b0;
  undefined1 auStack_4af [1199];
  
  if (DAT_0071f84c == 2) {
    if (param_2 < param_3) {
      puVar1 = auStack_4af + param_2 * 4;
      puVar2 = (undefined1 *)(param_1 + 1 + param_2 * 8);
      iVar3 = param_3 - param_2;
      do {
        puVar1[-1] = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[-1];
        puVar1[2] = 4;
        puVar1 = puVar1 + 4;
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (DAT_0071f808 != 0) {
      (**(code **)(*DAT_0071f85c + 0x80))(DAT_0071f85c,0);
      DAT_0071f808 = 0;
    }
    if (DAT_0071f854 != (int *)0x0) {
      (**(code **)(*DAT_0071f854 + 0x18))(DAT_0071f854,0,param_2,param_3,&local_4b0);
    }
  }
  return;
}

