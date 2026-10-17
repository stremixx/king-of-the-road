
undefined1 FUN_0044f260(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined1 unaff_SI;
  uint uVar3;
  
  uVar3 = param_2;
  if (param_1[4] == 0) {
    do {
      puVar2 = param_1;
      param_1 = puVar2;
      switch((char)puVar2[2]) {
      case '\0':
        return *(undefined1 *)(puVar2[5] + uVar3);
      case '\x01':
        uVar1 = *(uint *)puVar2[5];
        param_1 = (uint *)puVar2[5];
        if (uVar1 <= uVar3) {
          param_1 = (uint *)puVar2[6];
          uVar3 = uVar3 - uVar1;
        }
        break;
      case '\x02':
      case '\x03':
        (**(code **)(*(int *)puVar2[5] + 4))(uVar3,1,&param_2);
        return unaff_SI;
      }
    } while( true );
  }
  return *(undefined1 *)(param_1[4] + param_2);
}

