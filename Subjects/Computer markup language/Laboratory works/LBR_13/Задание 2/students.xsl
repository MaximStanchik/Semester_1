<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="/">
        <html>
            <head>
                <title>Student</title>
            </head>
            <body>
                <table border="1">
                    <tr>
                        <th>Имя Фамилия</th>
                        <th>Кяр</th>
                        <th>ОПИ</th>
                        <th>OAИП</th>
                        <th>AЛОЦВМ</th>
                        <th>Физкультура</th>
                        <th>БелМова</th>
                        <th>Английский</th>
                        <th>МатАнализ</th>
                    </tr>
                    <xsl:for-each select="students/student">
                        <tr align="center">
                            <td>
                                <xsl:value-of select="name"/>
                            </td>
                            <xsl:choose>
                                <xsl:when test="kyar&gt;8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="kyar"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:choose>
                                        <xsl:when test="kyar&lt;4">
                                            <td bgcolor="red">
                                                <xsl:value-of select="kyar"/>
                                            </td>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <td>
                                                <xsl:value-of select="kyar"/>
                                            </td>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:choose>
                                <xsl:when test="opi&gt;8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="opi"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:choose>
                                        <xsl:when test="opi&lt;4">
                                            <td bgcolor="red">
                                                <xsl:value-of select="opi"/>
                                            </td>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <td>
                                                <xsl:value-of select="opi"/>
                                            </td>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:choose>
                                <xsl:when test="oaip&gt;8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="oaip"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:choose>
                                        <xsl:when test="oaip&lt;4">
                                            <td bgcolor="red">
                                                <xsl:value-of select="oaip"/>
                                            </td>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <td>
                                                <xsl:value-of select="oaip"/>
                                            </td>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:choose>
                                <xsl:when test="alotsvm&gt;8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="alotsvm"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:choose>
                                        <xsl:when test="alotsvm&lt;4">
                                            <td bgcolor="red">
                                                <xsl:value-of select="alotsvm"/>
                                            </td>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <td>
                                                <xsl:value-of select="alotsvm"/>
                                            </td>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:choose>
                                <xsl:when test="alotsvm&gt;8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="alotsvm"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:choose>
                                        <xsl:when test="alotsvm&lt;4">
                                            <td bgcolor="red">
                                                <xsl:value-of select="alotsvm"/>
                                            </td>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <td>
                                                <xsl:value-of select="alotsvm"/>
                                            </td>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:choose>
                                <xsl:when test="belmova&gt;8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="belmova"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:choose>
                                        <xsl:when test="belmova&lt;4">
                                            <td bgcolor="red">
                                                <xsl:value-of select="belmova"/>
                                            </td>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <td>
                                                <xsl:value-of select="belmova"/>
                                            </td>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:choose>
                                <xsl:when test="angl&gt;8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="angl"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:choose>
                                        <xsl:when test="angl&lt;4">
                                            <td bgcolor="red">
                                                <xsl:value-of select="angl"/>
                                            </td>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <td>
                                                <xsl:value-of select="angl"/>
                                            </td>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:choose>
                                <xsl:when test="matanaliz&gt;8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="matanaliz"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:choose>
                                        <xsl:when test="matanaliz&lt;4">
                                            <td bgcolor="red">
                                                <xsl:value-of select="matanaliz"/>
                                            </td>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <td>
                                                <xsl:value-of select="matanaliz"/>
                                            </td>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:otherwise>
                            </xsl:choose>
                        </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>