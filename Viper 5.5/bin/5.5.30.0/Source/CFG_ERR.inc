const cfOk                                =  0;
    // Ok :-)

const cfErrObjectTypeNotExist             = -1;
    // ��� ������� �� ����������
const cfErrObjectTypeAlreadyExist         = -2;
    // ��� ������� ��� ����������

const cfErrObjectNotExist                 = -3;
    // ������ �� ����������
const cfErrObjectAlreadyExist             = -4;
    // ��� ���� ������ � ����� ������, ��� � ������������ �������

const cfErrContainerObjectNotExist        = -5;
    // ��������� �� ����������

const cfErrPropNotExist                   = -6;
    // �������� �� ����������
const cfErrPropAlreadyExist               = -7;
    // �������� ��� ����������

const cfErrObjectSelfAlreadyExist         = -8;
    // ��� ���� ������ � ��������� Self'��
const cfErrContainerSelfNotExist          = -9;
    // �� ������� ���������� � ��������� Self'��

const cfErrCantEditProp                   =  -10;
    // ������ ������������� ��������� ��������
const cfErrPropValueError                 = -11;
    // �������� ���� �� ���������� �� ���� � ��������� ���������
const cfErrCantCreateObject               = -12;
    // ������ ������� ������ ��� ������ � ��������� ����������
const cfErrCreateObjectError              = -14;
    // �� ���������� ������� ������

const cfErrTemplateAlreadyExist           = -15;
    // ��������� ������, ������� ��� ��� �� �����
const cfErrTemplateNotExist               = -16;
    // ������ �� ����������
const cfErrTemplateObjectAlreadyExist     = -17;
    // ����� ������ ��� ���� � �������

const cfErrObjectStorageNotCreated        = -18;
    // ������� ������� ���������� ObjectStorage, � �� �� ������ 

const cfErrInternalBadCommand             = -19;
    // ����������� ������� ��������� �������

const cfErrBadFieldType                   = -20;
    // �� ���� ���� ��������

const cfErrBadFind                        = -21;
    // ���� �� ������

const cfErrMustBeUnsigned                 = -23;
    // �������� ���� cftUnsignedInteger ������ 0

const cfErrThisRemoteProp                 = -24;
    // �������� �� �������

const cfErrCurrentContainerNil            = -25;
    // ������� ��������� �� �����

const cfErrObjectNotStorable              = -26;
    // ������ �� ������������ ����������/��������
const cfErrLoadObjectError                = -27;
    // �� ���������� ��������� ������
const cfErrStoreResourceNotFound          = -28;
    // �� ������ ������ ��� ���������� ������������
