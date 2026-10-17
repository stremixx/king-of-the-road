
void FUN_00467730(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = *param_1;
    uVar2 = param_1[-1];
    puVar3 = param_1;
    while (uVar1 < uVar2) {
      *puVar3 = uVar2;
      uVar2 = puVar3[-2];
      puVar3 = puVar3 + -1;
    }
    *puVar3 = uVar1;
  }
  return;
}

