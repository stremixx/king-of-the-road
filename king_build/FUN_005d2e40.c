
void __thiscall FUN_005d2e40(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (DAT_0071f078 == param_2) {
    FUN_005d2520(s_Error_in_detach_of_the_task_0067ebf4,0);
  }
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005d2730();
    if ((puVar1[3] == param_2) && (FUN_005d3110(puVar1), puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005d2730();
    if ((puVar1[3] == param_2) && (FUN_005d3110(puVar1), puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

