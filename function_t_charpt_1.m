%��ֵʵ�� 1.1 ��̬����
%���룺[0 20]֮����Ŷ��С���Ŷ�����
%��������Ŷ���õ�ȫ����
result = inputdlg({'�������Ŷ����[0 20]֮���������'}, 'charpt 1_1', 1, {'19'});
Numb = str2Double(char(result));

if ((Numb > 20) || Numb < 10)
    errording('�������Ŷ����[0 20]֮���������');
    return;
end

result = inputdlg({'������(0 1)֮����Ŷ�����'}, 'charpt 1_1', 1, {'0.00001'});
ess = str2Double(char(result));
ve = zeros(1, 21);
ve(21 - Numb) = ess;
root = roots(poly(1:20) + ve);
disp(['���Ŷ���', num2str(Numb), '���Ŷ�', num2str(ess), '�õ�ȫ����Ϊ��']);
disp(num2str(root));
