alter FUNCTION [dbo].[S$ATL_GET_DB_NAME]
(
)
RETURNS nvarchar(256)
AS
BEGIN
 declare @RESULTVALUE nvarchar(256) = (Select DB_NAME())
 RETURN @RESULTVALUE
end
