
int FUN_0044fc70(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  undefined4 unaff_EBX;
  undefined1 local_1;
  
  piVar4 = param_1;
  puVar1 = (uint *)*param_1;
  if ((puVar1 == (uint *)0x0) || (uVar2 = *puVar1, uVar2 == 0)) {
    return 0;
  }
  uVar7 = 0;
  if ((char *)puVar1[4] == (char *)0x0) {
    do {
      puVar5 = puVar1;
      puVar1 = puVar5;
      switch((char)puVar5[2]) {
      case '\0':
        goto switchD_0044fca8_caseD_0;
      case '\x01':
        uVar3 = *(uint *)puVar5[5];
        puVar1 = (uint *)puVar5[5];
        if (uVar3 <= uVar7) {
          uVar7 = uVar7 - uVar3;
          puVar1 = (uint *)puVar5[6];
        }
        break;
      case '\x02':
      case '\x03':
        (**(code **)(*(int *)puVar5[5] + 4))(uVar7,1,&param_1);
        cVar8 = (char)param_1;
        goto LAB_0044fce1;
      }
    } while( true );
  }
  cVar8 = *(char *)puVar1[4];
LAB_0044fce1:
  uVar7 = uVar2 - 1;
  uVar3 = ((uint *)*piVar4)[4];
  puVar1 = (uint *)*piVar4;
  if (uVar3 == 0) {
    do {
      puVar5 = puVar1;
      puVar1 = puVar5;
      switch((char)puVar5[2]) {
      case '\0':
        goto switchD_0044fd00_caseD_0;
      case '\x01':
        uVar3 = *(uint *)puVar5[5];
        puVar1 = (uint *)puVar5[5];
        if (uVar3 <= uVar7) {
          uVar7 = uVar7 - uVar3;
          puVar1 = (uint *)puVar5[6];
        }
        break;
      case '\x02':
      case '\x03':
        (**(code **)(*(int *)puVar5[5] + 4))(uVar7,1,&local_1);
        cVar6 = (char)((uint)unaff_EBX >> 0x18);
        goto LAB_0044fd39;
      }
    } while( true );
  }
  cVar6 = *(char *)(uVar3 + uVar7);
LAB_0044fd39:
  return cVar8 * 0xd + cVar6 * 5 + uVar2;
switchD_0044fca8_caseD_0:
  cVar8 = *(char *)(puVar5[5] + uVar7);
  goto LAB_0044fce1;
switchD_0044fd00_caseD_0:
  cVar6 = *(char *)(puVar5[5] + uVar7);
  goto LAB_0044fd39;
}

