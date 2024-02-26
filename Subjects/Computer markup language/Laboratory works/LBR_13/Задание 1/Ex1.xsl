<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="/">
        <html>
            <head>
                <title>Retro games</title>
            </head>
            <body bgcolor="#E6E6FA">
                <h2 align="center">Retro games</h2>
                <table border="1">
                    <tr bgcolor="#9acd32">
                        <th>Fallout</th>
                        <th>Quake 3 Arena</th>
                        <th>CS 1.6</th>
                        <th>World of warcraft</th>
                    </tr>
                    <xsl:for-each select="games/retro">
                    <xsl:sort select="year"/>
                        <tr>
                            <td>
                                <xsl:value-of select="game"/>
                            </td>
                            <td>
                                <xsl:value-of select="description"/>
                            </td>
                            <td>
                                <xsl:value-of select="year"/>
                            </td>
                        </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>