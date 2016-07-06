CREATE DATABASE  IF NOT EXISTS `komis` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `komis`;
-- MySQL dump 10.13  Distrib 5.7.9, for Win64 (x86_64)
--
-- Host: localhost    Database: komis
-- ------------------------------------------------------
-- Server version	5.7.13-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `pojazd`
--

DROP TABLE IF EXISTS `pojazd`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `pojazd` (
  `idPojazd` int(11) NOT NULL,
  `Marka` varchar(45) DEFAULT NULL,
  `Model` varchar(45) DEFAULT NULL,
  `Pojemnosc` int(11) DEFAULT NULL,
  `moc` int(11) DEFAULT NULL,
  `przebieg` bigint(64) DEFAULT NULL,
  `rok_produkcji` int(11) DEFAULT NULL,
  `paliwo` int(11) DEFAULT NULL,
  `naped` int(11) DEFAULT NULL,
  `kolor` varchar(45) DEFAULT NULL,
  `VIN` varchar(45) DEFAULT NULL,
  `typ_nadwozia` int(11) DEFAULT NULL,
  `kategoria_pojazdu` int(11) DEFAULT NULL,
  `typ_maszyny` int(11) DEFAULT NULL,
  `automatyczna_skrzynia` bit(1) DEFAULT NULL,
  `el_lusterka` bit(1) DEFAULT NULL,
  `el_szyby` bit(1) DEFAULT NULL,
  `klimatyzacja` bit(1) DEFAULT NULL,
  `nawigacja` bit(1) DEFAULT NULL,
  `zestaw_glosnomowiacy` bit(1) DEFAULT NULL,
  PRIMARY KEY (`idPojazd`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pojazd`
--

LOCK TABLES `pojazd` WRITE;
/*!40000 ALTER TABLE `pojazd` DISABLE KEYS */;
INSERT INTO `pojazd` VALUES (0,'Porshe','911',4000,500,100,2016,1,0,'czerwony','porshevin',7,2,0,'\0','','','','','\0');
/*!40000 ALTER TABLE `pojazd` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-07-06  1:58:27
